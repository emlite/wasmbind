#include <webbind/GPUCompilationMessage.hpp>

namespace webbind {

GPUCompilationMessage GPUCompilationMessage::take_ownership(Handle h) noexcept {
        return GPUCompilationMessage(h);
    }
GPUCompilationMessage GPUCompilationMessage::clone() const noexcept { return *this; }
emlite::Val GPUCompilationMessage::instance() noexcept { return emlite::Val::global("GPUCompilationMessage"); }
GPUCompilationMessage::GPUCompilationMessage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCompilationMessage::GPUCompilationMessage(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPUCompilationMessage::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

GPUCompilationMessageType GPUCompilationMessage::type() const {
    return emlite::Val::get("type").as<GPUCompilationMessageType>();
}

long long GPUCompilationMessage::lineNum() const {
    return emlite::Val::get("lineNum").as<long long>();
}

long long GPUCompilationMessage::linePos() const {
    return emlite::Val::get("linePos").as<long long>();
}

long long GPUCompilationMessage::offset() const {
    return emlite::Val::get("offset").as<long long>();
}

long long GPUCompilationMessage::length() const {
    return emlite::Val::get("length").as<long long>();
}


} // namespace webbind