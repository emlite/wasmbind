#include <webbind/GPUColorDict.hpp>

using emlite::Val;
namespace webbind {

GPUColorDict::GPUColorDict(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUColorDict GPUColorDict::take_ownership(Handle h) noexcept {
        return GPUColorDict(h);
    }
GPUColorDict::GPUColorDict(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUColorDict::GPUColorDict() noexcept: emlite::Val(emlite::Val::object()) {}
GPUColorDict GPUColorDict::clone() const noexcept { return *this; }

double GPUColorDict::r() const {
    return emlite::Val::get("r").as<double>();
}

void GPUColorDict::r(double value) {
    emlite::Val::set("r", value);
}

double GPUColorDict::g() const {
    return emlite::Val::get("g").as<double>();
}

void GPUColorDict::g(double value) {
    emlite::Val::set("g", value);
}

double GPUColorDict::b() const {
    return emlite::Val::get("b").as<double>();
}

void GPUColorDict::b(double value) {
    emlite::Val::set("b", value);
}

double GPUColorDict::a() const {
    return emlite::Val::get("a").as<double>();
}

void GPUColorDict::a(double value) {
    emlite::Val::set("a", value);
}


} // namespace webbind