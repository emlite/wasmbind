#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleSheet;
class MediaList;


/// The StyleSheet class.
/// [`StyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet)
class StyleSheet : public emlite::Val {
    explicit StyleSheet(Handle h) noexcept;

public:
    explicit StyleSheet(const emlite::Val &val) noexcept;
    static StyleSheet take_ownership(Handle h) noexcept;

    [[nodiscard]] StyleSheet clone() const noexcept;
    /// Getter of the `type` attribute.
    /// [`StyleSheet.type`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `href` attribute.
    /// [`StyleSheet.href`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/href)
    [[nodiscard]] jsbind::String href() const;
    /// Getter of the `ownerNode` attribute.
    /// [`StyleSheet.ownerNode`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/ownerNode)
    [[nodiscard]] jsbind::Any ownerNode() const;
    /// Getter of the `parentStyleSheet` attribute.
    /// [`StyleSheet.parentStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/parentStyleSheet)
    [[nodiscard]] CSSStyleSheet parentStyleSheet() const;
    /// Getter of the `title` attribute.
    /// [`StyleSheet.title`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/title)
    [[nodiscard]] jsbind::String title() const;
    /// Getter of the `media` attribute.
    /// [`StyleSheet.media`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/media)
    [[nodiscard]] MediaList media() const;
    /// Getter of the `disabled` attribute.
    /// [`StyleSheet.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`StyleSheet.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet/disabled)
    void disabled(bool value);
};

