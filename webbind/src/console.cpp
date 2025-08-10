#include <webbind/console.hpp>

using emlite::Val;

namespace webbind {

namespace console {

jsbind::Undefined assert() {
    return emlite::Val::global("console").call("assert").as<jsbind::Undefined>();
}

jsbind::Undefined assert(bool condition) {
    return emlite::Val::global("console").call("assert", condition).as<jsbind::Undefined>();
}

jsbind::Undefined assert(bool condition, const jsbind::Any& data) {
    return emlite::Val::global("console").call("assert", condition, data).as<jsbind::Undefined>();
}

jsbind::Undefined clear() {
    return emlite::Val::global("console").call("clear").as<jsbind::Undefined>();
}

jsbind::Undefined debug(const jsbind::Any& data) {
    return emlite::Val::global("console").call("debug", data).as<jsbind::Undefined>();
}

jsbind::Undefined error(const jsbind::Any& data) {
    return emlite::Val::global("console").call("error", data).as<jsbind::Undefined>();
}

jsbind::Undefined info(const jsbind::Any& data) {
    return emlite::Val::global("console").call("info", data).as<jsbind::Undefined>();
}

jsbind::Undefined log(const jsbind::Any& data) {
    return emlite::Val::global("console").call("log", data).as<jsbind::Undefined>();
}

jsbind::Undefined table() {
    return emlite::Val::global("console").call("table").as<jsbind::Undefined>();
}

jsbind::Undefined table(const jsbind::Any& tabularData) {
    return emlite::Val::global("console").call("table", tabularData).as<jsbind::Undefined>();
}

jsbind::Undefined table(const jsbind::Any& tabularData, const jsbind::TypedArray<jsbind::String>& properties) {
    return emlite::Val::global("console").call("table", tabularData, properties).as<jsbind::Undefined>();
}

jsbind::Undefined trace(const jsbind::Any& data) {
    return emlite::Val::global("console").call("trace", data).as<jsbind::Undefined>();
}

jsbind::Undefined warn(const jsbind::Any& data) {
    return emlite::Val::global("console").call("warn", data).as<jsbind::Undefined>();
}

jsbind::Undefined dir() {
    return emlite::Val::global("console").call("dir").as<jsbind::Undefined>();
}

jsbind::Undefined dir(const jsbind::Any& item) {
    return emlite::Val::global("console").call("dir", item).as<jsbind::Undefined>();
}

jsbind::Undefined dir(const jsbind::Any& item, const jsbind::Object& options) {
    return emlite::Val::global("console").call("dir", item, options).as<jsbind::Undefined>();
}

jsbind::Undefined dirxml(const jsbind::Any& data) {
    return emlite::Val::global("console").call("dirxml", data).as<jsbind::Undefined>();
}

jsbind::Undefined count() {
    return emlite::Val::global("console").call("count").as<jsbind::Undefined>();
}

jsbind::Undefined count(const jsbind::String& label) {
    return emlite::Val::global("console").call("count", label).as<jsbind::Undefined>();
}

jsbind::Undefined countReset() {
    return emlite::Val::global("console").call("countReset").as<jsbind::Undefined>();
}

jsbind::Undefined countReset(const jsbind::String& label) {
    return emlite::Val::global("console").call("countReset", label).as<jsbind::Undefined>();
}

jsbind::Undefined group(const jsbind::Any& data) {
    return emlite::Val::global("console").call("group", data).as<jsbind::Undefined>();
}

jsbind::Undefined groupCollapsed(const jsbind::Any& data) {
    return emlite::Val::global("console").call("groupCollapsed", data).as<jsbind::Undefined>();
}

jsbind::Undefined groupEnd() {
    return emlite::Val::global("console").call("groupEnd").as<jsbind::Undefined>();
}

jsbind::Undefined time() {
    return emlite::Val::global("console").call("time").as<jsbind::Undefined>();
}

jsbind::Undefined time(const jsbind::String& label) {
    return emlite::Val::global("console").call("time", label).as<jsbind::Undefined>();
}

jsbind::Undefined timeLog() {
    return emlite::Val::global("console").call("timeLog").as<jsbind::Undefined>();
}

jsbind::Undefined timeLog(const jsbind::String& label) {
    return emlite::Val::global("console").call("timeLog", label).as<jsbind::Undefined>();
}

jsbind::Undefined timeLog(const jsbind::String& label, const jsbind::Any& data) {
    return emlite::Val::global("console").call("timeLog", label, data).as<jsbind::Undefined>();
}

jsbind::Undefined timeEnd() {
    return emlite::Val::global("console").call("timeEnd").as<jsbind::Undefined>();
}

jsbind::Undefined timeEnd(const jsbind::String& label) {
    return emlite::Val::global("console").call("timeEnd", label).as<jsbind::Undefined>();
}

} // namespace console

} // namespace webbind