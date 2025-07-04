#include <webbind/GPUCompilationMessage.hpp>


GPUCompilationMessage GPUCompilationMessage::take_ownership(Handle h) noexcept {
        return GPUCompilationMessage(h);
    }
GPUCompilationMessage GPUCompilationMessage::clone() const noexcept { return *this; }
GPUCompilationMessage::GPUCompilationMessage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCompilationMessage::GPUCompilationMessage(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString GPUCompilationMessage::message() const {
    return emlite::Val::get("message").as<jsbind::DOMString>();
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

