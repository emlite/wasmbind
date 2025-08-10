#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "URLPatternComponentResult.hpp"

namespace webbind {

/// Dictionary type URLPatternResult
/// [`URLPatternResult`](https://developer.mozilla.org/en-US/docs/Web/API/URLPatternResult)
class URLPatternResult : public emlite::Val {
  explicit URLPatternResult(Handle h) noexcept;
public:
    static URLPatternResult take_ownership(Handle h) noexcept;
    explicit URLPatternResult(const emlite::Val &val) noexcept;
    URLPatternResult() noexcept;
    [[nodiscard]] URLPatternResult clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> inputs() const;
    void inputs(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] URLPatternComponentResult protocol() const;
    void protocol(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult username() const;
    void username(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult password() const;
    void password(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult hostname() const;
    void hostname(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult port() const;
    void port(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult pathname() const;
    void pathname(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult search() const;
    void search(const URLPatternComponentResult& value);
    [[nodiscard]] URLPatternComponentResult hash() const;
    void hash(const URLPatternComponentResult& value);
};

} // namespace webbind