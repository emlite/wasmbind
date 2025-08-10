#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "URLPatternComponentResult.hpp"

namespace webbind {

/// Dictionary type URLPatternResult
class URLPatternResult : public emlite::Val {
  explicit URLPatternResult(Handle h) noexcept;
public:
    static URLPatternResult take_ownership(Handle h) noexcept;
    explicit URLPatternResult(const emlite::Val &val) noexcept;
    URLPatternResult() noexcept;
    [[nodiscard]] URLPatternResult clone() const noexcept;
    /// Getter of the `inputs` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> inputs() const;
    /// Setter of the `inputs` attribute.
    void inputs(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `protocol` attribute.
    [[nodiscard]] URLPatternComponentResult protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const URLPatternComponentResult& value);
    /// Getter of the `username` attribute.
    [[nodiscard]] URLPatternComponentResult username() const;
    /// Setter of the `username` attribute.
    void username(const URLPatternComponentResult& value);
    /// Getter of the `password` attribute.
    [[nodiscard]] URLPatternComponentResult password() const;
    /// Setter of the `password` attribute.
    void password(const URLPatternComponentResult& value);
    /// Getter of the `hostname` attribute.
    [[nodiscard]] URLPatternComponentResult hostname() const;
    /// Setter of the `hostname` attribute.
    void hostname(const URLPatternComponentResult& value);
    /// Getter of the `port` attribute.
    [[nodiscard]] URLPatternComponentResult port() const;
    /// Setter of the `port` attribute.
    void port(const URLPatternComponentResult& value);
    /// Getter of the `pathname` attribute.
    [[nodiscard]] URLPatternComponentResult pathname() const;
    /// Setter of the `pathname` attribute.
    void pathname(const URLPatternComponentResult& value);
    /// Getter of the `search` attribute.
    [[nodiscard]] URLPatternComponentResult search() const;
    /// Setter of the `search` attribute.
    void search(const URLPatternComponentResult& value);
    /// Getter of the `hash` attribute.
    [[nodiscard]] URLPatternComponentResult hash() const;
    /// Setter of the `hash` attribute.
    void hash(const URLPatternComponentResult& value);
};

} // namespace webbind