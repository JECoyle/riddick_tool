#if !defined(renderer_h)

typedef enum
{
   R_Type_Clear,
   R_Type_Rect,
   R_Type_Circle,
   R_Type_Bitmap,
   R_Type_Glyph,
   R_Type_Blur
} R_Render_Type;

typedef struct
{
   v4 color;
} R_Clear;

typedef struct
{
   v4 color;
   v2 pos;
   v2 dim;
   Rect clip;
} R_Rect;

typedef struct
{
   v4 color;
   v2 pos;
   f32 radius;
   Rect clip;
} R_Circle;

typedef struct
{
   Bitmap bitmap;
   v2 pos;
   Rect clip;
} R_Bitmap;

typedef struct
{
   Glyph *glyph;
   Atlas *atlas;
   v2 pos;
   f32 scale;
   Rect clip;
} R_Glyph;

typedef struct
{
   Rect rect;
   u32 kernel_size;
   Rect clip;
} R_Blur;

typedef struct
{
   R_Render_Type type;
   union
   {
      R_Clear clear;
      R_Rect rect;
      R_Circle circle;
      R_Bitmap bitmap;
      R_Glyph glyph;
      R_Blur blur;
   };
} R_Header;

typedef struct
{
   Mandala mandala;
   Rect clip;
} R_Context;

#define renderer_h
#endif