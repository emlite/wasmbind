#include <jsbind/RegExp.hpp>

using namespace jsbind;

RegExp::RegExp(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

RegExp RegExp::take_ownership(Handle h) noexcept { return RegExp(h); }

RegExp::RegExp(const emlite::Val &val) noexcept : emlite::Val(val) {}

RegExp::RegExp(const String &pattern) noexcept
    : emlite::Val(emlite::Val::global("RegExp").new_(pattern)) {}

Result<RegExp, Error> RegExp::create(const String &pattern) noexcept {
    return RegExp(pattern).as<Result<RegExp, Error>>();
}

RegExp::RegExp(const String &pattern, const String &flags) noexcept
    : emlite::Val(emlite::Val::global("RegExp").new_(pattern, flags)) {}

Result<RegExp, Error> RegExp::create(const String &pattern, const String &flags) noexcept {
    return RegExp(pattern, flags).as<Result<RegExp, Error>>();
}

RegExp::RegExp() noexcept : emlite::Val(emlite::Val::global("RegExp").new_()) {}

emlite::Val RegExp::instance() noexcept { return emlite::Val::global("RegExp"); }

RegExp RegExp::clone() const noexcept { return *this; }

String RegExp::source() const noexcept { return get("source").as<String>(); }

String RegExp::flags() const noexcept { return get("flags").as<String>(); }

bool RegExp::global() const noexcept { return get("global").as<bool>(); }

bool RegExp::ignoreCase() const noexcept { return get("ignoreCase").as<bool>(); }

bool RegExp::multiline() const noexcept { return get("multiline").as<bool>(); }

bool RegExp::dotAll() const noexcept { return get("dotAll").as<bool>(); }

bool RegExp::unicode() const noexcept { return get("unicode").as<bool>(); }

bool RegExp::sticky() const noexcept { return get("sticky").as<bool>(); }

size_t RegExp::lastIndex() const noexcept { return get("lastIndex").as<size_t>(); }

void RegExp::setLastIndex(size_t index) noexcept { set("lastIndex", index); }

bool RegExp::test(const String &str) const noexcept { return call("test", str).as<bool>(); }

Option<Array> RegExp::exec(const String &str) const noexcept {
    auto result = call("exec", str);
    if (result.is_null()) {
        return none<Array>();
    }
    return some(result.as<Array>());
}

bool RegExp::contains(const String &str) const noexcept { return test(str); }

Option<Array> RegExp::find(const String &str) const noexcept { return exec(str); }

Array RegExp::findAll(const String &str) const {
    if (!global()) {
        throw_js("RegExp must have global flag for findAll");
    }
    return str.call("matchAll", *this).as<Array>();
}

Result<RegExp, Error> RegExp::literal(const String &text) noexcept {
    // Escape special regex characters
    auto escaped = text.call("replace", RegExp(R"([.*+?^${}()|[\]\\])", "g"), "\\$&");
    return RegExp::create(escaped.as<String>());
}

Result<RegExp, Error> RegExp::caseInsensitive(const String &pattern) noexcept {
    return RegExp::create(pattern, "i");
}

Result<RegExp, Error> RegExp::global(const String &pattern) noexcept {
    return RegExp::create(pattern, "g");
}

Result<RegExp, Error> RegExp::globalIgnoreCase(const String &pattern) noexcept {
    return RegExp::create(pattern, "gi");
}

Result<RegExp, Error> RegExp::multiline(const String &pattern) noexcept {
    return RegExp::create(pattern, "m");
}

// MatchIterator implementations
RegExp::MatchIterator::MatchIterator(const RegExp &regexp, String text, bool at_end)
    : regexp_(regexp), text_(emlite::detail::move(text)), at_end_(at_end) {
    if (!at_end_ && regexp.global()) {
        regexp_.call("setLastIndex", 0);
        advance();
    }
}

Array RegExp::MatchIterator::operator*() const {
    if (!current_match_) {
        throw_js("Iterator at end");
    }
    return *current_match_;
}

RegExp::MatchIterator &RegExp::MatchIterator::operator++() {
    advance();
    return *this;
}

bool RegExp::MatchIterator::operator!=(const MatchIterator &other) const {
    return at_end_ != other.at_end_;
}

bool RegExp::MatchIterator::operator==(const MatchIterator &other) const {
    return at_end_ == other.at_end_;
}

void RegExp::MatchIterator::advance() {
    auto result = regexp_.call("exec", text_);
    if (result.is_null()) {
        current_match_ = none<Array>();
        at_end_        = true;
    } else {
        current_match_ = some(result.as<Array>());
    }
}

RegExp::MatchIterator RegExp::begin(const String &text) const {
    if (!global()) {
        throw_js("RegExp must have global flag for iteration");
    }
    return {*this, text};
}

RegExp::MatchIterator RegExp::end(const String &text) const { return {*this, text, true}; }