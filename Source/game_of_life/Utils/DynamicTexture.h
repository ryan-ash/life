// DynamicTexture

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RHI.h"
#include "DynamicTexture.generated.h"

/*
	This implements a fast dynamic texture without the use of the
	UE4 Slate canvas features, which are way to slow for real-time
	use. Therefore, this writes into the texture's memory directly.
*/
UCLASS(BlueprintType)
class UDynamicTexture : public UObject
{
	GENERATED_BODY()
	
public:
	// Initializes the dynamic texture with given dimensions
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void Initialize(int32 InWidth, int32 InHeight, FLinearColor InClearColor, TextureFilter FilterMethod);

	// Sets a specified pixel to a color
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void SetPixel(int32 X, int32 Y, FLinearColor Color);

	// Converts a specified pixel back to linear color
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	FLinearColor GetPixel(int32 X, int32 Y);

	// Fills the texture with a given color
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void Fill(FLinearColor Color);

	// Fills a rectangle area of the texture with a given color
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void FillRect(int32 X, int32 Y, int32 Width, int32 Height, FLinearColor Color);

	// Draws a line between two points
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void DrawLine(int32 X1, int32 Y1, int32 X2, int32 Y2, FLinearColor Color);

	// Clears the canvas (same as filling with the clear color)
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void Clear();

	// Returns the UTexture resource which is used as a canvas
	UFUNCTION(BlueprintPure, Category = "Dynamic Texture")
	UTexture2D* GetTextureResource();

	// Needs to be called at the end of each drawing operation to update the texture
	// You can also call this at the end of multiple drawing operations, so the UTexture
	// does not get updated more than needed.
	UFUNCTION(BlueprintCallable, Category = "Dynamic Texture")
	void UpdateTexture();

	// Returns the width of this texture
	UFUNCTION(BlueprintPure, Category = "Dynamic Texture")
	int32 GetWidth();

	// Returns the height of this texture
	UFUNCTION(BlueprintPure, Category = "Dynamic Texture")
	int32 GetHeight();

private:
	// Internal function to set a pixel in the image
	void SetPixelInternal(uint8*& Ptr, uint8 Red, uint8 Green, uint8 Blue, uint8 Alpha);

	// Internal function to return the pointer pointing to the specified pixel
	uint8* GetPointerToPixel(int32 X, int32 Y);

private:
	// Reference to the UTexture2D* were drawing to
	UPROPERTY()
	UTexture2D* Texture;

	// The Dimensions of the image we're drawing
	int32 TextureWidth;
	int32 TextureHeight;

	// The clear color of the canvas
	FLinearColor ClearColor;

	// Unique pointer to the raw pixel data of the texture
	TUniquePtr<uint8[]> PixelBuffer;

	// Unique pointer to the proxy used to update the texture region (not really using regions,
	// it's one "big" region)
	TUniquePtr<FUpdateTextureRegion2D> UpdateTextureRegionProxy;
};
