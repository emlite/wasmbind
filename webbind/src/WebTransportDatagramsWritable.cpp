#include <webbind/WebTransportDatagramsWritable.hpp>
#include <webbind/WebTransportSendGroup.hpp>

namespace webbind {

WebTransportDatagramsWritable WebTransportDatagramsWritable::take_ownership(Handle h) noexcept {
        return WebTransportDatagramsWritable(h);
    }
WebTransportDatagramsWritable WebTransportDatagramsWritable::clone() const noexcept { return *this; }
emlite::Val WebTransportDatagramsWritable::instance() noexcept { return emlite::Val::global("WebTransportDatagramsWritable"); }
WebTransportDatagramsWritable::WebTransportDatagramsWritable(Handle h) noexcept : WritableStream(emlite::Val::take_ownership(h)) {}
WebTransportDatagramsWritable::WebTransportDatagramsWritable(const emlite::Val &val) noexcept: WritableStream(val) {}

WebTransportSendGroup WebTransportDatagramsWritable::sendGroup() const {
    return WritableStream::get("sendGroup").as<WebTransportSendGroup>();
}

void WebTransportDatagramsWritable::sendGroup(const WebTransportSendGroup& value) {
    WritableStream::set("sendGroup", value);
}

long long WebTransportDatagramsWritable::sendOrder() const {
    return WritableStream::get("sendOrder").as<long long>();
}

void WebTransportDatagramsWritable::sendOrder(long long value) {
    WritableStream::set("sendOrder", value);
}


} // namespace webbind