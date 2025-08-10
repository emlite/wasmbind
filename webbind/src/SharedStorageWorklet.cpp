#include "webbind/SharedStorageWorklet.hpp"
#include "webbind/SharedStorageUrlWithMetadata.hpp"
#include "webbind/SharedStorageRunOperationMethodOptions.hpp"

namespace webbind {

SharedStorageWorklet SharedStorageWorklet::take_ownership(Handle h) noexcept {
        return SharedStorageWorklet(h);
    }
SharedStorageWorklet SharedStorageWorklet::clone() const noexcept { return *this; }
emlite::Val SharedStorageWorklet::instance() noexcept { return emlite::Val::global("SharedStorageWorklet"); }
SharedStorageWorklet::SharedStorageWorklet(Handle h) noexcept : Worklet(emlite::Val::take_ownership(h)) {}
SharedStorageWorklet::SharedStorageWorklet(const emlite::Val &val) noexcept: Worklet(val) {}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls) {
    return Worklet::call("selectURL", name, urls).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options) {
    return Worklet::call("selectURL", name, urls, options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::run(const jsbind::String& name) {
    return Worklet::call("run", name).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::run(const jsbind::String& name, const SharedStorageRunOperationMethodOptions& options) {
    return Worklet::call("run", name, options).as<jsbind::Promise<jsbind::Any>>();
}


} // namespace webbind