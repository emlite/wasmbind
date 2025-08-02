#include <webbind/DOMParser.hpp>
#include <webbind/Document.hpp>


DOMParser DOMParser::take_ownership(Handle h) noexcept {
        return DOMParser(h);
    }
DOMParser DOMParser::clone() const noexcept { return *this; }
emlite::Val DOMParser::instance() noexcept { return emlite::Val::global("DOMParser"); }
DOMParser::DOMParser(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMParser::DOMParser(const emlite::Val &val) noexcept: emlite::Val(val) {}


DOMParser::DOMParser() : emlite::Val(emlite::Val::global("DOMParser").new_()) {}

Document DOMParser::parseFromString(const jsbind::Any& string, const DOMParserSupportedType& type) {
    return emlite::Val::call("parseFromString", string, type).as<Document>();
}

