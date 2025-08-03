#include <jsbind/url.hpp>

using namespace jsbind;

URLSearchParams::URLSearchParams(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

URLSearchParams URLSearchParams::take_ownership(Handle h) noexcept { return URLSearchParams(h); }

URLSearchParams::URLSearchParams(const emlite::Val &val) noexcept : emlite::Val(val) {}

bool URLSearchParams::get(const char *key, String &out) const {
    emlite::Val v = get_key(key);
    if (v.is_null())
        return false;
    out = v.template as<String>();
    return true;
}

void URLSearchParams::append(const char *key, const char *value) {
    call("append", emlite::Val(key), emlite::Val(value));
}

emlite::Val URLSearchParams::get_key(const char *k) const { return emlite::Val::get(k); }

URL::URL(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

URL URL::take_ownership(Handle h) noexcept { return URL(h); }

URL::URL(const emlite::Val &val) noexcept : emlite::Val(val) {}

URL::URL(const char *input) : emlite::Val(emlite::Val::global("URL").new_(input)) {}

URL::URL(const char *input, const char *base)
    : emlite::Val(emlite::Val::global("URL").new_(input, base)) {}

emlite::Val URL::instance() noexcept { return emlite::Val::global("URL"); }

String URL::href() const { return get("href").template as<String>(); }
void URL::set_href(const char *v) { set("href", emlite::Val(v)); }

String URL::protocol() const { return get("protocol").template as<String>(); }
void URL::set_protocol(const char *v) { set("protocol", emlite::Val(v)); }

String URL::pathname() const { return get("pathname").template as<String>(); }
void URL::set_pathname(const char *v) { set("pathname", emlite::Val(v)); }

URLSearchParams URL::search_params() const {
    return get("searchParams").template as<URLSearchParams>();
}

[[nodiscard]] String URL::search() const { return get("search").template as<String>(); }
void URL::search(const String &value) { set("search", value); }