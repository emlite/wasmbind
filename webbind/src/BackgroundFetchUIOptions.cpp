#include <webbind/BackgroundFetchUIOptions.hpp>
#include <webbind/ImageResource.hpp>

namespace webbind {

BackgroundFetchUIOptions::BackgroundFetchUIOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BackgroundFetchUIOptions BackgroundFetchUIOptions::take_ownership(Handle h) noexcept {
    return BackgroundFetchUIOptions(h);
}

BackgroundFetchUIOptions::BackgroundFetchUIOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

BackgroundFetchUIOptions::BackgroundFetchUIOptions() noexcept: emlite::Val(emlite::Val::object()) {}

BackgroundFetchUIOptions BackgroundFetchUIOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ImageResource> BackgroundFetchUIOptions::icons() const {
    return emlite::Val::get("icons").as<jsbind::TypedArray<ImageResource>>();
}

void BackgroundFetchUIOptions::icons(const jsbind::TypedArray<ImageResource>& value) {
    emlite::Val::set("icons", value);
}

jsbind::String BackgroundFetchUIOptions::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void BackgroundFetchUIOptions::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}


} // namespace webbind