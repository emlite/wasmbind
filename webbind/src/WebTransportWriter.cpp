#include <webbind/WebTransportWriter.hpp>


WebTransportWriter WebTransportWriter::take_ownership(Handle h) noexcept {
        return WebTransportWriter(h);
    }
WebTransportWriter WebTransportWriter::clone() const noexcept { return *this; }
WebTransportWriter::WebTransportWriter(Handle h) noexcept : WritableStreamDefaultWriter(emlite::Val::take_ownership(h)) {}
WebTransportWriter::WebTransportWriter(const emlite::Val &val) noexcept: WritableStreamDefaultWriter(val) {}


jsbind::Promise WebTransportWriter::atomicWrite(const jsbind::Any& chunk) {
    return WritableStreamDefaultWriter::call("atomicWrite", chunk).as<jsbind::Promise>();
}

jsbind::Undefined WebTransportWriter::commit() {
    return WritableStreamDefaultWriter::call("commit").as<jsbind::Undefined>();
}

