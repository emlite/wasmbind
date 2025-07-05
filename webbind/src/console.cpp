#include <webbind/console.hpp>


jsbind::Undefined console::assert() {
    return emlite::Val::global("console").call("assert").as<jsbind::Undefined>();
}

jsbind::Undefined console::assert(bool condition) {
    return emlite::Val::global("console").call("assert", condition).as<jsbind::Undefined>();
}

jsbind::Undefined console::assert(bool condition, const jsbind::Any& data) {
    return emlite::Val::global("console").call("assert", condition, data).as<jsbind::Undefined>();
}

jsbind::Undefined console::clear() {
    return emlite::Val::global("console").call("clear").as<jsbind::Undefined>();
}

jsbind::Undefined console::debug(const jsbind::Any& data) {
    return emlite::Val::global("console").call("debug", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::error(const jsbind::Any& data) {
    return emlite::Val::global("console").call("error", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::info(const jsbind::Any& data) {
    return emlite::Val::global("console").call("info", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::log(const jsbind::Any& data) {
    return emlite::Val::global("console").call("log", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::table() {
    return emlite::Val::global("console").call("table").as<jsbind::Undefined>();
}

jsbind::Undefined console::table(const jsbind::Any& tabularData) {
    return emlite::Val::global("console").call("table", tabularData).as<jsbind::Undefined>();
}

jsbind::Undefined console::table(const jsbind::Any& tabularData, const jsbind::Sequence<jsbind::DOMString>& properties) {
    return emlite::Val::global("console").call("table", tabularData, properties).as<jsbind::Undefined>();
}

jsbind::Undefined console::trace(const jsbind::Any& data) {
    return emlite::Val::global("console").call("trace", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::warn(const jsbind::Any& data) {
    return emlite::Val::global("console").call("warn", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::dir() {
    return emlite::Val::global("console").call("dir").as<jsbind::Undefined>();
}

jsbind::Undefined console::dir(const jsbind::Any& item) {
    return emlite::Val::global("console").call("dir", item).as<jsbind::Undefined>();
}

jsbind::Undefined console::dir(const jsbind::Any& item, const jsbind::Object& options) {
    return emlite::Val::global("console").call("dir", item, options).as<jsbind::Undefined>();
}

jsbind::Undefined console::dirxml(const jsbind::Any& data) {
    return emlite::Val::global("console").call("dirxml", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::count() {
    return emlite::Val::global("console").call("count").as<jsbind::Undefined>();
}

jsbind::Undefined console::count(const jsbind::DOMString& label) {
    return emlite::Val::global("console").call("count", label).as<jsbind::Undefined>();
}

jsbind::Undefined console::countReset() {
    return emlite::Val::global("console").call("countReset").as<jsbind::Undefined>();
}

jsbind::Undefined console::countReset(const jsbind::DOMString& label) {
    return emlite::Val::global("console").call("countReset", label).as<jsbind::Undefined>();
}

jsbind::Undefined console::group(const jsbind::Any& data) {
    return emlite::Val::global("console").call("group", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::groupCollapsed(const jsbind::Any& data) {
    return emlite::Val::global("console").call("groupCollapsed", data).as<jsbind::Undefined>();
}

jsbind::Undefined console::groupEnd() {
    return emlite::Val::global("console").call("groupEnd").as<jsbind::Undefined>();
}

jsbind::Undefined console::time() {
    return emlite::Val::global("console").call("time").as<jsbind::Undefined>();
}

jsbind::Undefined console::time(const jsbind::DOMString& label) {
    return emlite::Val::global("console").call("time", label).as<jsbind::Undefined>();
}

jsbind::Undefined console::timeLog() {
    return emlite::Val::global("console").call("timeLog").as<jsbind::Undefined>();
}

jsbind::Undefined console::timeLog(const jsbind::DOMString& label) {
    return emlite::Val::global("console").call("timeLog", label).as<jsbind::Undefined>();
}

jsbind::Undefined console::timeLog(const jsbind::DOMString& label, const jsbind::Any& data) {
    return emlite::Val::global("console").call("timeLog", label, data).as<jsbind::Undefined>();
}

jsbind::Undefined console::timeEnd() {
    return emlite::Val::global("console").call("timeEnd").as<jsbind::Undefined>();
}

jsbind::Undefined console::timeEnd(const jsbind::DOMString& label) {
    return emlite::Val::global("console").call("timeEnd", label).as<jsbind::Undefined>();
}

