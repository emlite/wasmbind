#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "URLPatternOptions.hpp"
#include "URLPatternResult.hpp"

namespace webbind {

/// Interface URLPattern
/// [`URLPattern`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern)
class URLPattern : public emlite::Val {
    explicit URLPattern(Handle h) noexcept;
public:
    explicit URLPattern(const emlite::Val &val) noexcept;
    static URLPattern take_ownership(Handle h) noexcept;
    [[nodiscard]] URLPattern clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new URLPattern(..)` constructor, creating a new URLPattern instance
    URLPattern();
    /// The `new URLPattern(..)` constructor, creating a new URLPattern instance
    URLPattern(const jsbind::Any& input);
    /// The `new URLPattern(..)` constructor, creating a new URLPattern instance
    URLPattern(const jsbind::Any& input, const URLPatternOptions& options);
    /// The test method.
    /// [`URLPattern.test`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/test)
    bool test();
    /// The test method.
    /// [`URLPattern.test`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/test)
    bool test(const jsbind::Any& input);
    /// The test method.
    /// [`URLPattern.test`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/test)
    bool test(const jsbind::Any& input, const jsbind::String& baseURL);
    /// The exec method.
    /// [`URLPattern.exec`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/exec)
    URLPatternResult exec();
    /// The exec method.
    /// [`URLPattern.exec`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/exec)
    URLPatternResult exec(const jsbind::Any& input);
    /// The exec method.
    /// [`URLPattern.exec`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/exec)
    URLPatternResult exec(const jsbind::Any& input, const jsbind::String& baseURL);
    /// Getter of the `protocol` attribute.
    /// [`URLPattern.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Getter of the `username` attribute.
    /// [`URLPattern.username`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/username)
    [[nodiscard]] jsbind::String username() const;
    /// Getter of the `password` attribute.
    /// [`URLPattern.password`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/password)
    [[nodiscard]] jsbind::String password() const;
    /// Getter of the `hostname` attribute.
    /// [`URLPattern.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Getter of the `port` attribute.
    /// [`URLPattern.port`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/port)
    [[nodiscard]] jsbind::String port() const;
    /// Getter of the `pathname` attribute.
    /// [`URLPattern.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Getter of the `search` attribute.
    /// [`URLPattern.search`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/search)
    [[nodiscard]] jsbind::String search() const;
    /// Getter of the `hash` attribute.
    /// [`URLPattern.hash`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// Getter of the `hasRegExpGroups` attribute.
    /// [`URLPattern.hasRegExpGroups`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hasRegExpGroups)
    [[nodiscard]] bool hasRegExpGroups() const;
};

} // namespace webbind