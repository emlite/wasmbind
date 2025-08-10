#include <webbind/ImageResource.hpp>

using emlite::Val;
namespace webbind {

ImageResource::ImageResource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageResource ImageResource::take_ownership(Handle h) noexcept {
        return ImageResource(h);
    }
ImageResource::ImageResource(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageResource::ImageResource() noexcept: emlite::Val(emlite::Val::object()) {}
ImageResource ImageResource::clone() const noexcept { return *this; }

jsbind::String ImageResource::src() const {
    return emlite::Val::get("src").as<jsbind::String>();
}

void ImageResource::src(const jsbind::String& value) {
    emlite::Val::set("src", value);
}

jsbind::String ImageResource::sizes() const {
    return emlite::Val::get("sizes").as<jsbind::String>();
}

void ImageResource::sizes(const jsbind::String& value) {
    emlite::Val::set("sizes", value);
}

jsbind::String ImageResource::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void ImageResource::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::String ImageResource::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void ImageResource::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind