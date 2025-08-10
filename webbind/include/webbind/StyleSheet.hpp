#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSStyleSheet;
class MediaList;

/// Interface StyleSheet
/// [`StyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet)
class StyleSheet : public emlite::Val {
    explicit StyleSheet(Handle h) noexcept;
public:
    explicit StyleSheet(const emlite::Val &val) noexcept;
    static StyleSheet take_ownership(Handle h) noexcept;
    [[nodiscard]] StyleSheet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`StyleSheet.type`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/type)
    /// [`StyleSheet.type`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`StyleSheet.href`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/href)
    /// [`StyleSheet.href`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/href)
    [[nodiscard]] jsbind::String href() const;
    /// [`StyleSheet.ownerNode`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/ownerNode)
    /// [`StyleSheet.ownerNode`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/ownerNode)
    [[nodiscard]] jsbind::Any ownerNode() const;
    /// [`StyleSheet.parentStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/parentStyleSheet)
    /// [`StyleSheet.parentStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/parentStyleSheet)
    [[nodiscard]] CSSStyleSheet parentStyleSheet() const;
    /// [`StyleSheet.title`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/title)
    /// [`StyleSheet.title`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/title)
    [[nodiscard]] jsbind::String title() const;
    /// [`StyleSheet.media`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/media)
    /// [`StyleSheet.media`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/media)
    [[nodiscard]] MediaList media() const;
    /// [`StyleSheet.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/disabled)
    /// [`StyleSheet.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`StyleSheet.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/disabled)
    void disabled(bool value);
};

} // namespace webbind