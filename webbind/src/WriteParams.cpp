#include <webbind/WriteParams.hpp>

namespace webbind {

WriteParams::WriteParams(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WriteParams WriteParams::take_ownership(Handle h) noexcept {
    return WriteParams(h);
}

WriteParams::WriteParams(const emlite::Val &val) noexcept: emlite::Val(val) {}

WriteParams::WriteParams() noexcept: emlite::Val(emlite::Val::object()) {}

WriteParams WriteParams::clone() const noexcept { return *this; }

WriteCommandType WriteParams::type() const {
    return emlite::Val::get("type").as<WriteCommandType>();
}

void WriteParams::type(const WriteCommandType& value) {
    emlite::Val::set("type", value);
}

long long WriteParams::size() const {
    return emlite::Val::get("size").as<long long>();
}

void WriteParams::size(long long value) {
    emlite::Val::set("size", value);
}

long long WriteParams::position() const {
    return emlite::Val::get("position").as<long long>();
}

void WriteParams::position(long long value) {
    emlite::Val::set("position", value);
}

jsbind::Any WriteParams::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void WriteParams::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind