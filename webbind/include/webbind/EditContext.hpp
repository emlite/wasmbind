#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMRect;
class HTMLElement;


/// The EditContext class.
/// [`EditContext`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext)
class EditContext : public EventTarget {
    explicit EditContext(Handle h) noexcept;

public:
    explicit EditContext(const emlite::Val &val) noexcept;
    static EditContext take_ownership(Handle h) noexcept;

    [[nodiscard]] EditContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new EditContext(..)` constructor, creating a new EditContext instance
    EditContext();
    /// The `new EditContext(..)` constructor, creating a new EditContext instance
    EditContext(const jsbind::Any& options);
    /// The updateText method.
    /// [`EditContext.updateText`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/updateText)
    jsbind::Undefined updateText(unsigned long rangeStart, unsigned long rangeEnd, const jsbind::String& text);
    /// The updateSelection method.
    /// [`EditContext.updateSelection`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/updateSelection)
    jsbind::Undefined updateSelection(unsigned long start, unsigned long end);
    /// The updateControlBounds method.
    /// [`EditContext.updateControlBounds`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/updateControlBounds)
    jsbind::Undefined updateControlBounds(const DOMRect& controlBounds);
    /// The updateSelectionBounds method.
    /// [`EditContext.updateSelectionBounds`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/updateSelectionBounds)
    jsbind::Undefined updateSelectionBounds(const DOMRect& selectionBounds);
    /// The updateCharacterBounds method.
    /// [`EditContext.updateCharacterBounds`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/updateCharacterBounds)
    jsbind::Undefined updateCharacterBounds(unsigned long rangeStart, const jsbind::TypedArray<DOMRect>& characterBounds);
    /// The attachedElements method.
    /// [`EditContext.attachedElements`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/attachedElements)
    jsbind::TypedArray<HTMLElement> attachedElements();
    /// Getter of the `text` attribute.
    /// [`EditContext.text`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/text)
    [[nodiscard]] jsbind::String text() const;
    /// Getter of the `selectionStart` attribute.
    /// [`EditContext.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/selectionStart)
    [[nodiscard]] unsigned long selectionStart() const;
    /// Getter of the `selectionEnd` attribute.
    /// [`EditContext.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/selectionEnd)
    [[nodiscard]] unsigned long selectionEnd() const;
    /// Getter of the `characterBoundsRangeStart` attribute.
    /// [`EditContext.characterBoundsRangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/characterBoundsRangeStart)
    [[nodiscard]] unsigned long characterBoundsRangeStart() const;
    /// The characterBounds method.
    /// [`EditContext.characterBounds`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/characterBounds)
    jsbind::TypedArray<DOMRect> characterBounds();
    /// Getter of the `ontextupdate` attribute.
    /// [`EditContext.ontextupdate`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/ontextupdate)
    [[nodiscard]] jsbind::Any ontextupdate() const;
    /// Setter of the `ontextupdate` attribute.
    /// [`EditContext.ontextupdate`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/ontextupdate)
    void ontextupdate(const jsbind::Any& value);
    /// Getter of the `ontextformatupdate` attribute.
    /// [`EditContext.ontextformatupdate`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/ontextformatupdate)
    [[nodiscard]] jsbind::Any ontextformatupdate() const;
    /// Setter of the `ontextformatupdate` attribute.
    /// [`EditContext.ontextformatupdate`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/ontextformatupdate)
    void ontextformatupdate(const jsbind::Any& value);
    /// Getter of the `oncharacterboundsupdate` attribute.
    /// [`EditContext.oncharacterboundsupdate`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/oncharacterboundsupdate)
    [[nodiscard]] jsbind::Any oncharacterboundsupdate() const;
    /// Setter of the `oncharacterboundsupdate` attribute.
    /// [`EditContext.oncharacterboundsupdate`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/oncharacterboundsupdate)
    void oncharacterboundsupdate(const jsbind::Any& value);
    /// Getter of the `oncompositionstart` attribute.
    /// [`EditContext.oncompositionstart`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/oncompositionstart)
    [[nodiscard]] jsbind::Any oncompositionstart() const;
    /// Setter of the `oncompositionstart` attribute.
    /// [`EditContext.oncompositionstart`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/oncompositionstart)
    void oncompositionstart(const jsbind::Any& value);
    /// Getter of the `oncompositionend` attribute.
    /// [`EditContext.oncompositionend`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/oncompositionend)
    [[nodiscard]] jsbind::Any oncompositionend() const;
    /// Setter of the `oncompositionend` attribute.
    /// [`EditContext.oncompositionend`](https://developer.mozilla.org/en-US/docs/Web/API/EditContext/oncompositionend)
    void oncompositionend(const jsbind::Any& value);
};

