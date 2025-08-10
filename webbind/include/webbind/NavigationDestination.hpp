#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface NavigationDestination
/// [`NavigationDestination`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination)
class NavigationDestination : public emlite::Val {
    explicit NavigationDestination(Handle h) noexcept;
public:
    explicit NavigationDestination(const emlite::Val &val) noexcept;
    static NavigationDestination take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationDestination clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `url` attribute.
    /// [`NavigationDestination.url`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `key` attribute.
    /// [`NavigationDestination.key`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination/key)
    [[nodiscard]] jsbind::String key() const;
    /// Getter of the `id` attribute.
    /// [`NavigationDestination.id`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `index` attribute.
    /// [`NavigationDestination.index`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination/index)
    [[nodiscard]] long long index() const;
    /// Getter of the `sameDocument` attribute.
    /// [`NavigationDestination.sameDocument`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination/sameDocument)
    [[nodiscard]] bool sameDocument() const;
    /// The getState method.
    /// [`NavigationDestination.getState`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination/getState)
    jsbind::Any getState();
};

} // namespace webbind