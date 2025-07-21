#include <webbind/SharedStorageWorklet.hpp>


SharedStorageUrlWithMetadata::SharedStorageUrlWithMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata::take_ownership(Handle h) noexcept {
        return SharedStorageUrlWithMetadata(h);
    }
SharedStorageUrlWithMetadata::SharedStorageUrlWithMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageUrlWithMetadata::SharedStorageUrlWithMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata::clone() const noexcept { return *this; }

jsbind::USVString SharedStorageUrlWithMetadata::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

void SharedStorageUrlWithMetadata::url(const jsbind::USVString& value) {
    emlite::Val::set("url", value);
}

jsbind::Object SharedStorageUrlWithMetadata::reportingMetadata() const {
    return emlite::Val::get("reportingMetadata").as<jsbind::Object>();
}

void SharedStorageUrlWithMetadata::reportingMetadata(const jsbind::Object& value) {
    emlite::Val::set("reportingMetadata", value);
}

SharedStorageRunOperationMethodOptions::SharedStorageRunOperationMethodOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions::take_ownership(Handle h) noexcept {
        return SharedStorageRunOperationMethodOptions(h);
    }
SharedStorageRunOperationMethodOptions::SharedStorageRunOperationMethodOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageRunOperationMethodOptions::SharedStorageRunOperationMethodOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions::clone() const noexcept { return *this; }

jsbind::Object SharedStorageRunOperationMethodOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void SharedStorageRunOperationMethodOptions::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}

bool SharedStorageRunOperationMethodOptions::resolveToConfig() const {
    return emlite::Val::get("resolveToConfig").as<bool>();
}

void SharedStorageRunOperationMethodOptions::resolveToConfig(bool value) {
    emlite::Val::set("resolveToConfig", value);
}

bool SharedStorageRunOperationMethodOptions::keepAlive() const {
    return emlite::Val::get("keepAlive").as<bool>();
}

void SharedStorageRunOperationMethodOptions::keepAlive(bool value) {
    emlite::Val::set("keepAlive", value);
}

jsbind::Any SharedStorageRunOperationMethodOptions::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<jsbind::Any>();
}

void SharedStorageRunOperationMethodOptions::privateAggregationConfig(const jsbind::Any& value) {
    emlite::Val::set("privateAggregationConfig", value);
}

jsbind::DOMString SharedStorageRunOperationMethodOptions::savedQuery() const {
    return emlite::Val::get("savedQuery").as<jsbind::DOMString>();
}

void SharedStorageRunOperationMethodOptions::savedQuery(const jsbind::DOMString& value) {
    emlite::Val::set("savedQuery", value);
}

SharedStorageWorklet SharedStorageWorklet::take_ownership(Handle h) noexcept {
        return SharedStorageWorklet(h);
    }
SharedStorageWorklet SharedStorageWorklet::clone() const noexcept { return *this; }
SharedStorageWorklet::SharedStorageWorklet(Handle h) noexcept : Worklet(emlite::Val::take_ownership(h)) {}
SharedStorageWorklet::SharedStorageWorklet(const emlite::Val &val) noexcept: Worklet(val) {}


jsbind::Promise<jsbind::Any> SharedStorageWorklet::selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls) {
    return Worklet::call("selectURL", name, urls).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::selectURL(const jsbind::DOMString& name, const jsbind::Sequence<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options) {
    return Worklet::call("selectURL", name, urls, options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::run(const jsbind::DOMString& name) {
    return Worklet::call("run", name).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> SharedStorageWorklet::run(const jsbind::DOMString& name, const SharedStorageRunOperationMethodOptions& options) {
    return Worklet::call("run", name, options).as<jsbind::Promise<jsbind::Any>>();
}

