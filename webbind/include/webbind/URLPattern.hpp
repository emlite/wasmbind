#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class URLPatternResult;


class URLPatternResult : public emlite::Val {
  explicit URLPatternResult(Handle h) noexcept;
public:
    static URLPatternResult take_ownership(Handle h) noexcept;
    explicit URLPatternResult(const emlite::Val &val) noexcept;
    URLPatternResult() noexcept;
    URLPatternResult clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> inputs() const;
    void inputs(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::Any protocol() const;
    void protocol(const jsbind::Any& value);
    jsbind::Any username() const;
    void username(const jsbind::Any& value);
    jsbind::Any password() const;
    void password(const jsbind::Any& value);
    jsbind::Any hostname() const;
    void hostname(const jsbind::Any& value);
    jsbind::Any port() const;
    void port(const jsbind::Any& value);
    jsbind::Any pathname() const;
    void pathname(const jsbind::Any& value);
    jsbind::Any search() const;
    void search(const jsbind::Any& value);
    jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
};

class URLPattern : public emlite::Val {
    explicit URLPattern(Handle h) noexcept;

public:
    explicit URLPattern(const emlite::Val &val) noexcept;
    static URLPattern take_ownership(Handle h) noexcept;

    URLPattern clone() const noexcept;
    URLPattern();
    URLPattern(const jsbind::Any& input);
    URLPattern(const jsbind::Any& input, const jsbind::Any& options);
    bool test();
    bool test(const jsbind::Any& input);
    bool test(const jsbind::Any& input, const jsbind::String& baseURL);
    URLPatternResult exec();
    URLPatternResult exec(const jsbind::Any& input);
    URLPatternResult exec(const jsbind::Any& input, const jsbind::String& baseURL);
    jsbind::String protocol() const;
    jsbind::String username() const;
    jsbind::String password() const;
    jsbind::String hostname() const;
    jsbind::String port() const;
    jsbind::String pathname() const;
    jsbind::String search() const;
    jsbind::String hash() const;
    bool hasRegExpGroups() const;
};

