#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class URLPatternOptions;
class URLPatternResult;

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
    URLPattern(const jsbind::Any& input, const jsbind::String& baseURL);
    /// The `new URLPattern(..)` constructor, creating a new URLPattern instance
    URLPattern(const jsbind::Any& input, const jsbind::String& baseURL, const URLPatternOptions& options);
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
    /// [`URLPattern.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/protocol)
    /// [`URLPattern.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// [`URLPattern.username`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/username)
    /// [`URLPattern.username`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/username)
    [[nodiscard]] jsbind::String username() const;
    /// [`URLPattern.password`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/password)
    /// [`URLPattern.password`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/password)
    [[nodiscard]] jsbind::String password() const;
    /// [`URLPattern.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hostname)
    /// [`URLPattern.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// [`URLPattern.port`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/port)
    /// [`URLPattern.port`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/port)
    [[nodiscard]] jsbind::String port() const;
    /// [`URLPattern.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/pathname)
    /// [`URLPattern.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// [`URLPattern.search`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/search)
    /// [`URLPattern.search`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/search)
    [[nodiscard]] jsbind::String search() const;
    /// [`URLPattern.hash`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hash)
    /// [`URLPattern.hash`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// [`URLPattern.hasRegExpGroups`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hasRegExpGroups)
    /// [`URLPattern.hasRegExpGroups`](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern/hasRegExpGroups)
    [[nodiscard]] bool hasRegExpGroups() const;
};

} // namespace webbind