#include <webbind/WebTransportWriter.hpp>

namespace webbind {

WebTransportWriter WebTransportWriter::take_ownership(Handle h) noexcept {
    return WebTransportWriter(h);
}

WebTransportWriter WebTransportWriter::clone() const noexcept { return *this; }

emlite::Val WebTransportWriter::instance() noexcept { return emlite::Val::global("WebTransportWriter"); }

WebTransportWriter::WebTransportWriter(Handle h) noexcept : WritableStreamDefaultWriter(emlite::Val::take_ownership(h)) {}

WebTransportWriter::WebTransportWriter(const emlite::Val &val) noexcept: WritableStreamDefaultWriter(val) {}

jsbind::Promise<jsbind::Undefined> WebTransportWriter::atomicWrite() {
    return WritableStreamDefaultWriter::call("atomicWrite").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WebTransportWriter::atomicWrite(const jsbind::Any& chunk) {
    return WritableStreamDefaultWriter::call("atomicWrite", chunk).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined WebTransportWriter::commit() {
    return WritableStreamDefaultWriter::call("commit").as<jsbind::Undefined>();
}


} // namespace webbind