#include <webbind/WebTransportDatagramStats.hpp>

using emlite::Val;
namespace webbind {

WebTransportDatagramStats::WebTransportDatagramStats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportDatagramStats WebTransportDatagramStats::take_ownership(Handle h) noexcept {
        return WebTransportDatagramStats(h);
    }
WebTransportDatagramStats::WebTransportDatagramStats(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportDatagramStats::WebTransportDatagramStats() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportDatagramStats WebTransportDatagramStats::clone() const noexcept { return *this; }

long long WebTransportDatagramStats::droppedIncoming() const {
    return emlite::Val::get("droppedIncoming").as<long long>();
}

void WebTransportDatagramStats::droppedIncoming(long long value) {
    emlite::Val::set("droppedIncoming", value);
}

long long WebTransportDatagramStats::expiredIncoming() const {
    return emlite::Val::get("expiredIncoming").as<long long>();
}

void WebTransportDatagramStats::expiredIncoming(long long value) {
    emlite::Val::set("expiredIncoming", value);
}

long long WebTransportDatagramStats::expiredOutgoing() const {
    return emlite::Val::get("expiredOutgoing").as<long long>();
}

void WebTransportDatagramStats::expiredOutgoing(long long value) {
    emlite::Val::set("expiredOutgoing", value);
}

long long WebTransportDatagramStats::lostOutgoing() const {
    return emlite::Val::get("lostOutgoing").as<long long>();
}

void WebTransportDatagramStats::lostOutgoing(long long value) {
    emlite::Val::set("lostOutgoing", value);
}


} // namespace webbind