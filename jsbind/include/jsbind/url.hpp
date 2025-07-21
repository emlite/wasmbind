#pragma once

#include "String.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {
class URLSearchParams : public emlite::Val {
    explicit URLSearchParams(Handle h) noexcept;

  public:
    static URLSearchParams take_ownership(Handle h
    ) noexcept;
    URLSearchParams(const emlite::Val &val) noexcept;

    bool get(const char *key, String &out) const;

    /* append(key, value) */
    void append(const char *key, const char *value);

  private:
    /* avoid shadowing Val::get */
    emlite::Val get_key(const char *k) const;
};

class URL : public emlite::Val {
    explicit URL(Handle h) noexcept;

  public:
    static URL take_ownership(Handle h) noexcept;
    URL(const emlite::Val &val) noexcept;

    URL(const char *input);

    URL(const char *input, const char *base);

    [[nodiscard]] String href() const;
    void set_href(const char *v);
    [[nodiscard]] String protocol() const;
    void set_protocol(const char *v);

    [[nodiscard]] String pathname() const;
    void set_pathname(const char *v);

    [[nodiscard]] URLSearchParams search_params() const;

    [[nodiscard]] String search() const;
    void search(const String& value);
};
} // namespace jsbind
