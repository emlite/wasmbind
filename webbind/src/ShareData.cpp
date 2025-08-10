#include <webbind/ShareData.hpp>
#include <webbind/File.hpp>

namespace webbind {

ShareData::ShareData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShareData ShareData::take_ownership(Handle h) noexcept {
    return ShareData(h);
}

ShareData::ShareData(const emlite::Val &val) noexcept: emlite::Val(val) {}

ShareData::ShareData() noexcept: emlite::Val(emlite::Val::object()) {}

ShareData ShareData::clone() const noexcept { return *this; }

jsbind::TypedArray<File> ShareData::files() const {
    return emlite::Val::get("files").as<jsbind::TypedArray<File>>();
}

void ShareData::files(const jsbind::TypedArray<File>& value) {
    emlite::Val::set("files", value);
}

jsbind::String ShareData::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void ShareData::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

jsbind::String ShareData::text() const {
    return emlite::Val::get("text").as<jsbind::String>();
}

void ShareData::text(const jsbind::String& value) {
    emlite::Val::set("text", value);
}

jsbind::String ShareData::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void ShareData::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}


} // namespace webbind