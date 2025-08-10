#include <webbind/Transformer.hpp>

using emlite::Val;
namespace webbind {

Transformer::Transformer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Transformer Transformer::take_ownership(Handle h) noexcept {
        return Transformer(h);
    }
Transformer::Transformer(const emlite::Val &val) noexcept: emlite::Val(val) {}
Transformer::Transformer() noexcept: emlite::Val(emlite::Val::object()) {}
Transformer Transformer::clone() const noexcept { return *this; }

jsbind::Function Transformer::start() const {
    return emlite::Val::get("start").as<jsbind::Function>();
}

void Transformer::start(const jsbind::Function& value) {
    emlite::Val::set("start", value);
}

jsbind::Function Transformer::transform() const {
    return emlite::Val::get("transform").as<jsbind::Function>();
}

void Transformer::transform(const jsbind::Function& value) {
    emlite::Val::set("transform", value);
}

jsbind::Function Transformer::flush() const {
    return emlite::Val::get("flush").as<jsbind::Function>();
}

void Transformer::flush(const jsbind::Function& value) {
    emlite::Val::set("flush", value);
}

jsbind::Function Transformer::cancel() const {
    return emlite::Val::get("cancel").as<jsbind::Function>();
}

void Transformer::cancel(const jsbind::Function& value) {
    emlite::Val::set("cancel", value);
}

jsbind::Any Transformer::readableType() const {
    return emlite::Val::get("readableType").as<jsbind::Any>();
}

void Transformer::readableType(const jsbind::Any& value) {
    emlite::Val::set("readableType", value);
}

jsbind::Any Transformer::writableType() const {
    return emlite::Val::get("writableType").as<jsbind::Any>();
}

void Transformer::writableType(const jsbind::Any& value) {
    emlite::Val::set("writableType", value);
}


} // namespace webbind