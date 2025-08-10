#include "webbind/ProgressEventInit.hpp"

using emlite::Val;
namespace webbind {

ProgressEventInit::ProgressEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ProgressEventInit ProgressEventInit::take_ownership(Handle h) noexcept {
        return ProgressEventInit(h);
    }
ProgressEventInit::ProgressEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ProgressEventInit::ProgressEventInit() noexcept: EventInit(emlite::Val::object()) {}
ProgressEventInit ProgressEventInit::clone() const noexcept { return *this; }

bool ProgressEventInit::lengthComputable() const {
    return emlite::Val::get("lengthComputable").as<bool>();
}

void ProgressEventInit::lengthComputable(bool value) {
    emlite::Val::set("lengthComputable", value);
}

double ProgressEventInit::loaded() const {
    return emlite::Val::get("loaded").as<double>();
}

void ProgressEventInit::loaded(double value) {
    emlite::Val::set("loaded", value);
}

double ProgressEventInit::total() const {
    return emlite::Val::get("total").as<double>();
}

void ProgressEventInit::total(double value) {
    emlite::Val::set("total", value);
}


} // namespace webbind