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
    jsbind::Sequence<jsbind::Any> inputs() const;
    void inputs(const jsbind::Sequence<jsbind::Any>& value);
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
    bool test(const jsbind::Any& input, const jsbind::USVString& baseURL);
    URLPatternResult exec();
    URLPatternResult exec(const jsbind::Any& input);
    URLPatternResult exec(const jsbind::Any& input, const jsbind::USVString& baseURL);
    jsbind::USVString protocol() const;
    jsbind::USVString username() const;
    jsbind::USVString password() const;
    jsbind::USVString hostname() const;
    jsbind::USVString port() const;
    jsbind::USVString pathname() const;
    jsbind::USVString search() const;
    jsbind::USVString hash() const;
    bool hasRegExpGroups() const;
};

