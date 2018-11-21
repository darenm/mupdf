#ifndef MUPDF_FITZ_OUTPUT_PNG_H
#define MUPDF_FITZ_OUTPUT_PNG_H

#include "mupdf/fitz/system.h"
#include "mupdf/fitz/context.h"
#include "mupdf/fitz/output.h"
#include "mupdf/fitz/band-writer.h"
#include "mupdf/fitz/pixmap.h"
#include "mupdf/fitz/bitmap.h"

#include "mupdf/fitz/buffer.h"
#include "mupdf/fitz/image.h"

void fz_save_pixmap_as_png(fz_context *ctx, fz_pixmap *pixmap, const char *filename);
void fz_write_pixmap_as_png(fz_context *ctx, fz_output *out, const fz_pixmap *pixmap);

fz_band_writer *fz_new_png_band_writer(fz_context *ctx, fz_output *out);

fz_buffer *fz_new_buffer_from_image_as_png(fz_context *ctx, fz_image *image, const fz_color_params *color_params);
fz_buffer *fz_new_buffer_from_pixmap_as_png(fz_context *ctx, fz_pixmap *pixmap, const fz_color_params *color_params);

#endif
