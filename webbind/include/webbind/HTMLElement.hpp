#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Element.hpp"
#include "SVGElement.hpp"
#include "enums.hpp"

class ElementInternals;
class ShowPopoverOptions;
class EditContext;
class CSSStyleDeclaration;
class DOMStringMap;
class HTMLElement;


class ShowPopoverOptions : public emlite::Val {
  explicit ShowPopoverOptions(Handle h) noexcept;
public:
    static ShowPopoverOptions take_ownership(Handle h) noexcept;
    explicit ShowPopoverOptions(const emlite::Val &val) noexcept;
    ShowPopoverOptions() noexcept;
    [[nodiscard]] ShowPopoverOptions clone() const noexcept;
    [[nodiscard]] HTMLElement source() const;
    void source(const HTMLElement& value);
};

/// The HTMLElement class.
/// [`HTMLElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement)
class HTMLElement : public Element {
    explicit HTMLElement(Handle h) noexcept;

public:
    explicit HTMLElement(const emlite::Val &val) noexcept;
    static HTMLElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLElement clone() const noexcept;
    /// The `new HTMLElement(..)` constructor, creating a new HTMLElement instance
    HTMLElement();
    /// Getter of the `title` attribute.
    /// [`HTMLElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/title)
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    /// [`HTMLElement.title`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/title)
    void title(const jsbind::String& value);
    /// Getter of the `lang` attribute.
    /// [`HTMLElement.lang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    /// [`HTMLElement.lang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/lang)
    void lang(const jsbind::String& value);
    /// Getter of the `translate` attribute.
    /// [`HTMLElement.translate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/translate)
    [[nodiscard]] bool translate() const;
    /// Setter of the `translate` attribute.
    /// [`HTMLElement.translate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/translate)
    void translate(bool value);
    /// Getter of the `dir` attribute.
    /// [`HTMLElement.dir`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dir)
    [[nodiscard]] jsbind::String dir() const;
    /// Setter of the `dir` attribute.
    /// [`HTMLElement.dir`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dir)
    void dir(const jsbind::String& value);
    /// Getter of the `hidden` attribute.
    /// [`HTMLElement.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/hidden)
    [[nodiscard]] jsbind::Any hidden() const;
    /// Setter of the `hidden` attribute.
    /// [`HTMLElement.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/hidden)
    void hidden(const jsbind::Any& value);
    /// Getter of the `inert` attribute.
    /// [`HTMLElement.inert`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/inert)
    [[nodiscard]] bool inert() const;
    /// Setter of the `inert` attribute.
    /// [`HTMLElement.inert`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/inert)
    void inert(bool value);
    /// The click method.
    /// [`HTMLElement.click`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/click)
    jsbind::Undefined click();
    /// Getter of the `accessKey` attribute.
    /// [`HTMLElement.accessKey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKey)
    [[nodiscard]] jsbind::String accessKey() const;
    /// Setter of the `accessKey` attribute.
    /// [`HTMLElement.accessKey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKey)
    void accessKey(const jsbind::String& value);
    /// Getter of the `accessKeyLabel` attribute.
    /// [`HTMLElement.accessKeyLabel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/accessKeyLabel)
    [[nodiscard]] jsbind::String accessKeyLabel() const;
    /// Getter of the `draggable` attribute.
    /// [`HTMLElement.draggable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/draggable)
    [[nodiscard]] bool draggable() const;
    /// Setter of the `draggable` attribute.
    /// [`HTMLElement.draggable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/draggable)
    void draggable(bool value);
    /// Getter of the `spellcheck` attribute.
    /// [`HTMLElement.spellcheck`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/spellcheck)
    [[nodiscard]] bool spellcheck() const;
    /// Setter of the `spellcheck` attribute.
    /// [`HTMLElement.spellcheck`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/spellcheck)
    void spellcheck(bool value);
    /// Getter of the `writingSuggestions` attribute.
    /// [`HTMLElement.writingSuggestions`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/writingSuggestions)
    [[nodiscard]] jsbind::String writingSuggestions() const;
    /// Setter of the `writingSuggestions` attribute.
    /// [`HTMLElement.writingSuggestions`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/writingSuggestions)
    void writingSuggestions(const jsbind::String& value);
    /// Getter of the `autocapitalize` attribute.
    /// [`HTMLElement.autocapitalize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocapitalize)
    [[nodiscard]] jsbind::String autocapitalize() const;
    /// Setter of the `autocapitalize` attribute.
    /// [`HTMLElement.autocapitalize`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocapitalize)
    void autocapitalize(const jsbind::String& value);
    /// Getter of the `autocorrect` attribute.
    /// [`HTMLElement.autocorrect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocorrect)
    [[nodiscard]] bool autocorrect() const;
    /// Setter of the `autocorrect` attribute.
    /// [`HTMLElement.autocorrect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autocorrect)
    void autocorrect(bool value);
    /// Getter of the `innerText` attribute.
    /// [`HTMLElement.innerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/innerText)
    [[nodiscard]] jsbind::String innerText() const;
    /// Setter of the `innerText` attribute.
    /// [`HTMLElement.innerText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/innerText)
    void innerText(const jsbind::String& value);
    /// Getter of the `outerText` attribute.
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
    /// Getter of the `popover` attribute.
    /// [`HTMLElement.popover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/popover)
    [[nodiscard]] jsbind::String popover() const;
    /// Setter of the `popover` attribute.
    /// [`HTMLElement.popover`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/popover)
    void popover(const jsbind::String& value);
    /// Getter of the `scrollParent` attribute.
    /// [`HTMLElement.scrollParent`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/scrollParent)
    [[nodiscard]] Element scrollParent() const;
    /// Getter of the `offsetParent` attribute.
    /// [`HTMLElement.offsetParent`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetParent)
    [[nodiscard]] Element offsetParent() const;
    /// Getter of the `offsetTop` attribute.
    /// [`HTMLElement.offsetTop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetTop)
    [[nodiscard]] long offsetTop() const;
    /// Getter of the `offsetLeft` attribute.
    /// [`HTMLElement.offsetLeft`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetLeft)
    [[nodiscard]] long offsetLeft() const;
    /// Getter of the `offsetWidth` attribute.
    /// [`HTMLElement.offsetWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetWidth)
    [[nodiscard]] long offsetWidth() const;
    /// Getter of the `offsetHeight` attribute.
    /// [`HTMLElement.offsetHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/offsetHeight)
    [[nodiscard]] long offsetHeight() const;
    /// Getter of the `editContext` attribute.
    /// [`HTMLElement.editContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/editContext)
    [[nodiscard]] EditContext editContext() const;
    /// Setter of the `editContext` attribute.
    /// [`HTMLElement.editContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/editContext)
    void editContext(const EditContext& value);
    /// Getter of the `style` attribute.
    /// [`HTMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/style)
    [[nodiscard]] CSSStyleDeclaration style() const;
    /// Getter of the `onbeforexrselect` attribute.
    /// [`HTMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`HTMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// Getter of the `virtualKeyboardPolicy` attribute.
    /// [`HTMLElement.virtualKeyboardPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/virtualKeyboardPolicy)
    [[nodiscard]] jsbind::String virtualKeyboardPolicy() const;
    /// Setter of the `virtualKeyboardPolicy` attribute.
    /// [`HTMLElement.virtualKeyboardPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/virtualKeyboardPolicy)
    void virtualKeyboardPolicy(const jsbind::String& value);
    /// Getter of the `dataset` attribute.
    /// [`HTMLElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/dataset)
    [[nodiscard]] DOMStringMap dataset() const;
    /// Getter of the `nonce` attribute.
    /// [`HTMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/nonce)
    [[nodiscard]] jsbind::String nonce() const;
    /// Setter of the `nonce` attribute.
    /// [`HTMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/nonce)
    void nonce(const jsbind::String& value);
    /// Getter of the `autofocus` attribute.
    /// [`HTMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autofocus)
    [[nodiscard]] bool autofocus() const;
    /// Setter of the `autofocus` attribute.
    /// [`HTMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement/autofocus)
    void autofocus(bool value);
    /// Getter of the `tabIndex` attribute.
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

