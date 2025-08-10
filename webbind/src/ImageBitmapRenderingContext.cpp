#include <webbind/ImageBitmapRenderingContext.hpp>
#include <webbind/ImageBitmap.hpp>

namespace webbind {

ImageBitmapRenderingContext ImageBitmapRenderingContext::take_ownership(Handle h) noexcept {
    return ImageBitmapRenderingContext(h);
}

ImageBitmapRenderingContext ImageBitmapRenderingContext::clone() const noexcept { return *this; }

emlite::Val ImageBitmapRenderingContext::instance() noexcept { return emlite::Val::global("ImageBitmapRenderingContext"); }

ImageBitmapRenderingContext::ImageBitmapRenderingContext(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

ImageBitmapRenderingContext::ImageBitmapRenderingContext(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any ImageBitmapRenderingContext::canvas() const {
    return emlite::Val::get("canvas").as<jsbind::Any>();
}

jsbind::Undefined ImageBitmapRenderingContext::transferFromImageBitmap(const ImageBitmap& bitmap) {
    return emlite::Val::call("transferFromImageBitmap", bitmap).as<jsbind::Undefined>();
}


} // namespace webbind