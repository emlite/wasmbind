#include <webbind/ContentIndex.hpp>
#include <webbind/ContentDescription.hpp>

namespace webbind {

ContentIndex ContentIndex::take_ownership(Handle h) noexcept {
        return ContentIndex(h);
    }
ContentIndex ContentIndex::clone() const noexcept { return *this; }
emlite::Val ContentIndex::instance() noexcept { return emlite::Val::global("ContentIndex"); }
ContentIndex::ContentIndex(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContentIndex::ContentIndex(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> ContentIndex::add(const ContentDescription& description) {
    return emlite::Val::call("add", description).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ContentIndex::delete_(const jsbind::String& id) {
    return emlite::Val::call("delete", id).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<ContentDescription>> ContentIndex::getAll() {
    return emlite::Val::call("getAll").as<jsbind::Promise<jsbind::TypedArray<ContentDescription>>>();
}


} // namespace webbind