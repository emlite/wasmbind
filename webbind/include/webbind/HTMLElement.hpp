#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Element.hpp"

namespace webbind {

class ElementInternals;
class ShowPopoverOptions;
class EditContext;
class CSSStyleDeclaration;
class DOMStringMap;
class FocusOptions;

/// Interface HTMLElement
/// [`HTMLElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement)
class HTMLElement : public Element {
    explicit HTMLElement(Handle h) noexcept;
public:
    explicit HTMLElement(const emlite::Val &val) noexcept;
    static HTMLElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLElement(..)` constructor, creating a new HTMLElement instance
    HTMLElement();
    /// [`HTMLElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/title)
    /// [`HTMLElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/title)
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    /// [`HTMLElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/title)
    void title(const jsbind::String& value);
    /// [`HTMLElement.lang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/lang)
    /// [`HTMLElement.lang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    /// [`HTMLElement.lang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/lang)
    void lang(const jsbind::String& value);
    /// [`HTMLElement.translate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/translate)
    /// [`HTMLElement.translate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/translate)
    [[nodiscard]] bool translate() const;
    /// Setter of the `translate` attribute.
    /// [`HTMLElement.translate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/translate)
    void translate(bool value);
    /// [`HTMLElement.dir`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dir)
    /// [`HTMLElement.dir`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dir)
    [[nodiscard]] jsbind::String dir() const;
    /// Setter of the `dir` attribute.
    /// [`HTMLElement.dir`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dir)
    void dir(const jsbind::String& value);
    /// [`HTMLElement.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/hidden)
    /// [`HTMLElement.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/hidden)
    [[nodiscard]] jsbind::Any hidden() const;
    /// Setter of the `hidden` attribute.
    /// [`HTMLElement.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/hidden)
    void hidden(const jsbind::Any& value);
    /// [`HTMLElement.inert`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/inert)
    /// [`HTMLElement.inert`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/inert)
    [[nodiscard]] bool inert() const;
    /// Setter of the `inert` attribute.
    /// [`HTMLElement.inert`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/inert)
    void inert(bool value);
    /// The click method.
    /// [`HTMLElement.click`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/click)
    jsbind::Undefined click();
    /// [`HTMLElement.accessKey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKey)
    /// [`HTMLElement.accessKey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKey)
    [[nodiscard]] jsbind::String accessKey() const;
    /// Setter of the `accessKey` attribute.
    /// [`HTMLElement.accessKey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKey)
    void accessKey(const jsbind::String& value);
    /// [`HTMLElement.accessKeyLabel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKeyLabel)
    /// [`HTMLElement.accessKeyLabel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKeyLabel)
    [[nodiscard]] jsbind::String accessKeyLabel() const;
    /// [`HTMLElement.draggable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/draggable)
    /// [`HTMLElement.draggable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/draggable)
    [[nodiscard]] bool draggable() const;
    /// Setter of the `draggable` attribute.
    /// [`HTMLElement.draggable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/draggable)
    void draggable(bool value);
    /// [`HTMLElement.spellcheck`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/spellcheck)
    /// [`HTMLElement.spellcheck`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/spellcheck)
    [[nodiscard]] bool spellcheck() const;
    /// Setter of the `spellcheck` attribute.
    /// [`HTMLElement.spellcheck`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/spellcheck)
    void spellcheck(bool value);
    /// [`HTMLElement.writingSuggestions`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/writingSuggestions)
    /// [`HTMLElement.writingSuggestions`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/writingSuggestions)
    [[nodiscard]] jsbind::String writingSuggestions() const;
    /// Setter of the `writingSuggestions` attribute.
    /// [`HTMLElement.writingSuggestions`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/writingSuggestions)
    void writingSuggestions(const jsbind::String& value);
    /// [`HTMLElement.autocapitalize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocapitalize)
    /// [`HTMLElement.autocapitalize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocapitalize)
    [[nodiscard]] jsbind::String autocapitalize() const;
    /// Setter of the `autocapitalize` attribute.
    /// [`HTMLElement.autocapitalize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocapitalize)
    void autocapitalize(const jsbind::String& value);
    /// [`HTMLElement.autocorrect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocorrect)
    /// [`HTMLElement.autocorrect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocorrect)
    [[nodiscard]] bool autocorrect() const;
    /// Setter of the `autocorrect` attribute.
    /// [`HTMLElement.autocorrect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocorrect)
    void autocorrect(bool value);
    /// [`HTMLElement.innerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/innerText)
    /// [`HTMLElement.innerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/innerText)
    [[nodiscard]] jsbind::String innerText() const;
    /// Setter of the `innerText` attribute.
    /// [`HTMLElement.innerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/innerText)
    void innerText(const jsbind::String& value);
    /// [`HTMLElement.outerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/outerText)
    /// [`HTMLElement.outerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/outerText)
    [[nodiscard]] jsbind::String outerText() const;
    /// Setter of the `outerText` attribute.
    /// [`HTMLElement.outerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/outerText)
    void outerText(const jsbind::String& value);
    /// The attachInternals method.
    /// [`HTMLElement.attachInternals`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/attachInternals)
    ElementInternals attachInternals();
    /// The showPopover method.
    /// [`HTMLElement.showPopover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/showPopover)
    jsbind::Undefined showPopover();
    /// The showPopover method.
    /// [`HTMLElement.showPopover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/showPopover)
    jsbind::Undefined showPopover(const ShowPopoverOptions& options);
    /// The hidePopover method.
    /// [`HTMLElement.hidePopover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/hidePopover)
    jsbind::Undefined hidePopover();
    /// The togglePopover method.
    /// [`HTMLElement.togglePopover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/togglePopover)
    bool togglePopover();
    /// The togglePopover method.
    /// [`HTMLElement.togglePopover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/togglePopover)
    bool togglePopover(const jsbind::Any& options);
    /// [`HTMLElement.popover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/popover)
    /// [`HTMLElement.popover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/popover)
    [[nodiscard]] jsbind::String popover() const;
    /// Setter of the `popover` attribute.
    /// [`HTMLElement.popover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/popover)
    void popover(const jsbind::String& value);
    /// [`HTMLElement.scrollParent`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/scrollParent)
    /// [`HTMLElement.scrollParent`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/scrollParent)
    [[nodiscard]] Element scrollParent() const;
    /// [`HTMLElement.offsetParent`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetParent)
    /// [`HTMLElement.offsetParent`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetParent)
    [[nodiscard]] Element offsetParent() const;
    /// [`HTMLElement.offsetTop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetTop)
    /// [`HTMLElement.offsetTop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetTop)
    [[nodiscard]] long offsetTop() const;
    /// [`HTMLElement.offsetLeft`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetLeft)
    /// [`HTMLElement.offsetLeft`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetLeft)
    [[nodiscard]] long offsetLeft() const;
    /// [`HTMLElement.offsetWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetWidth)
    /// [`HTMLElement.offsetWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetWidth)
    [[nodiscard]] long offsetWidth() const;
    /// [`HTMLElement.offsetHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetHeight)
    /// [`HTMLElement.offsetHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetHeight)
    [[nodiscard]] long offsetHeight() const;
    /// [`HTMLElement.editContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/editContext)
    /// [`HTMLElement.editContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/editContext)
    [[nodiscard]] EditContext editContext() const;
    /// Setter of the `editContext` attribute.
    /// [`HTMLElement.editContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/editContext)
    void editContext(const EditContext& value);
    /// [`HTMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/style)
    /// [`HTMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/style)
    [[nodiscard]] CSSStyleDeclaration style() const;
    /// [`HTMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/onbeforexrselect)
    /// [`HTMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`HTMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// [`HTMLElement.virtualKeyboardPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/virtualKeyboardPolicy)
    /// [`HTMLElement.virtualKeyboardPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/virtualKeyboardPolicy)
    [[nodiscard]] jsbind::String virtualKeyboardPolicy() const;
    /// Setter of the `virtualKeyboardPolicy` attribute.
    /// [`HTMLElement.virtualKeyboardPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/virtualKeyboardPolicy)
    void virtualKeyboardPolicy(const jsbind::String& value);
    /// [`HTMLElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dataset)
    /// [`HTMLElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dataset)
    [[nodiscard]] DOMStringMap dataset() const;
    /// [`HTMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/nonce)
    /// [`HTMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/nonce)
    [[nodiscard]] jsbind::String nonce() const;
    /// Setter of the `nonce` attribute.
    /// [`HTMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/nonce)
    void nonce(const jsbind::String& value);
    /// [`HTMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autofocus)
    /// [`HTMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autofocus)
    [[nodiscard]] bool autofocus() const;
    /// Setter of the `autofocus` attribute.
    /// [`HTMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autofocus)
    void autofocus(bool value);
    /// [`HTMLElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/tabIndex)
    /// [`HTMLElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/tabIndex)
    [[nodiscard]] long tabIndex() const;
    /// Setter of the `tabIndex` attribute.
    /// [`HTMLElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/tabIndex)
    void tabIndex(long value);
    /// The focus method.
    /// [`HTMLElement.focus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/focus)
    jsbind::Undefined focus();
    /// The focus method.
    /// [`HTMLElement.focus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/focus)
    jsbind::Undefined focus(const FocusOptions& options);
    /// The blur method.
    /// [`HTMLElement.blur`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/blur)
    jsbind::Undefined blur();
};

} // namespace webbind