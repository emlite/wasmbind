#include <webbind/Highlight.hpp>
#include <webbind/AbstractRange.hpp>


Highlight Highlight::take_ownership(Handle h) noexcept {
        return Highlight(h);
    }
Highlight Highlight::clone() const noexcept { return *this; }
emlite::Val Highlight::instance() noexcept { return emlite::Val::global("Highlight"); }
Highlight::Highlight(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Highlight::Highlight(const emlite::Val &val) noexcept: emlite::Val(val) {}


Highlight::Highlight(const AbstractRange& initialRanges) : emlite::Val(emlite::Val::global("Highlight").new_(initialRanges)) {}

long Highlight::priority() const {
    return emlite::Val::get("priority").as<long>();
}

void Highlight::priority(long value) {
    emlite::Val::set("priority", value);
}

HighlightType Highlight::type() const {
    return emlite::Val::get("type").as<HighlightType>();
}

void Highlight::type(const HighlightType& value) {
    emlite::Val::set("type", value);
}

