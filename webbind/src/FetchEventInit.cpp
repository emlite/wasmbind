#include <webbind/FetchEventInit.hpp>
#include <webbind/Request.hpp>

using emlite::Val;
namespace webbind {

FetchEventInit::FetchEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
FetchEventInit FetchEventInit::take_ownership(Handle h) noexcept {
        return FetchEventInit(h);
    }
FetchEventInit::FetchEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
FetchEventInit::FetchEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
FetchEventInit FetchEventInit::clone() const noexcept { return *this; }

Request FetchEventInit::request() const {
    return emlite::Val::get("request").as<Request>();
}

void FetchEventInit::request(const Request& value) {
    emlite::Val::set("request", value);
}

jsbind::Promise<jsbind::Any> FetchEventInit::preloadResponse() const {
    return emlite::Val::get("preloadResponse").as<jsbind::Promise<jsbind::Any>>();
}

void FetchEventInit::preloadResponse(const jsbind::Promise<jsbind::Any>& value) {
    emlite::Val::set("preloadResponse", value);
}

jsbind::String FetchEventInit::clientId() const {
    return emlite::Val::get("clientId").as<jsbind::String>();
}

void FetchEventInit::clientId(const jsbind::String& value) {
    emlite::Val::set("clientId", value);
}

jsbind::String FetchEventInit::resultingClientId() const {
    return emlite::Val::get("resultingClientId").as<jsbind::String>();
}

void FetchEventInit::resultingClientId(const jsbind::String& value) {
    emlite::Val::set("resultingClientId", value);
}

jsbind::String FetchEventInit::replacesClientId() const {
    return emlite::Val::get("replacesClientId").as<jsbind::String>();
}

void FetchEventInit::replacesClientId(const jsbind::String& value) {
    emlite::Val::set("replacesClientId", value);
}

jsbind::Promise<jsbind::Undefined> FetchEventInit::handled() const {
    return emlite::Val::get("handled").as<jsbind::Promise<jsbind::Undefined>>();
}

void FetchEventInit::handled(const jsbind::Promise<jsbind::Undefined>& value) {
    emlite::Val::set("handled", value);
}


} // namespace webbind