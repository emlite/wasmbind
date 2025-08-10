#include <webbind/IIRFilterOptions.hpp>

using emlite::Val;
namespace webbind {

IIRFilterOptions::IIRFilterOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
IIRFilterOptions IIRFilterOptions::take_ownership(Handle h) noexcept {
        return IIRFilterOptions(h);
    }
IIRFilterOptions::IIRFilterOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
IIRFilterOptions::IIRFilterOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
IIRFilterOptions IIRFilterOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<double> IIRFilterOptions::feedforward() const {
    return emlite::Val::get("feedforward").as<jsbind::TypedArray<double>>();
}

void IIRFilterOptions::feedforward(jsbind::TypedArray<double> value) {
    emlite::Val::set("feedforward", value);
}

jsbind::TypedArray<double> IIRFilterOptions::feedback() const {
    return emlite::Val::get("feedback").as<jsbind::TypedArray<double>>();
}

void IIRFilterOptions::feedback(jsbind::TypedArray<double> value) {
    emlite::Val::set("feedback", value);
}


} // namespace webbind