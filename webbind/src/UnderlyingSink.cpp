#include <webbind/UnderlyingSink.hpp>

using emlite::Val;
namespace webbind {

UnderlyingSink::UnderlyingSink(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UnderlyingSink UnderlyingSink::take_ownership(Handle h) noexcept {
        return UnderlyingSink(h);
    }
UnderlyingSink::UnderlyingSink(const emlite::Val &val) noexcept: emlite::Val(val) {}
UnderlyingSink::UnderlyingSink() noexcept: emlite::Val(emlite::Val::object()) {}
UnderlyingSink UnderlyingSink::clone() const noexcept { return *this; }

jsbind::Function UnderlyingSink::start() const {
    return emlite::Val::get("start").as<jsbind::Function>();
}

void UnderlyingSink::start(const jsbind::Function& value) {
    emlite::Val::set("start", value);
}

jsbind::Function UnderlyingSink::write() const {
    return emlite::Val::get("write").as<jsbind::Function>();
}

void UnderlyingSink::write(const jsbind::Function& value) {
    emlite::Val::set("write", value);
}

jsbind::Function UnderlyingSink::close() const {
    return emlite::Val::get("close").as<jsbind::Function>();
}

void UnderlyingSink::close(const jsbind::Function& value) {
    emlite::Val::set("close", value);
}

jsbind::Function UnderlyingSink::abort() const {
    return emlite::Val::get("abort").as<jsbind::Function>();
}

void UnderlyingSink::abort(const jsbind::Function& value) {
    emlite::Val::set("abort", value);
}

jsbind::Any UnderlyingSink::type() const {
    return emlite::Val::get("type").as<jsbind::Any>();
}

void UnderlyingSink::type(const jsbind::Any& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind