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
    ShowPopoverOptions clone() const noexcept;
    HTMLElement source() const;
    void source(const HTMLElement& value);
};

class HTMLElement : public Element {
    explicit HTMLElement(Handle h) noexcept;

public:
    explicit HTMLElement(const emlite::Val &val) noexcept;
    static HTMLElement take_ownership(Handle h) noexcept;

    HTMLElement clone() const noexcept;
    HTMLElement();
    jsbind::DOMString title() const;
    void title(const jsbind::DOMString& value);
    jsbind::DOMString lang() const;
    void lang(const jsbind::DOMString& value);
    bool translate() const;
    void translate(bool value);
    jsbind::DOMString dir() const;
    void dir(const jsbind::DOMString& value);
    jsbind::Any hidden() const;
    void hidden(const jsbind::Any& value);
    bool inert() const;
    void inert(bool value);
    jsbind::Undefined click();
    jsbind::DOMString accessKey() const;
    void accessKey(const jsbind::DOMString& value);
    jsbind::DOMString accessKeyLabel() const;
    bool draggable() const;
    void draggable(bool value);
    bool spellcheck() const;
    void spellcheck(bool value);
    jsbind::DOMString writingSuggestions() const;
    void writingSuggestions(const jsbind::DOMString& value);
    jsbind::DOMString autocapitalize() const;
    void autocapitalize(const jsbind::DOMString& value);
    bool autocorrect() const;
    void autocorrect(bool value);
    jsbind::DOMString innerText() const;
    void innerText(const jsbind::DOMString& value);
    jsbind::DOMString outerText() const;
    void outerText(const jsbind::DOMString& value);
    ElementInternals attachInternals();
    jsbind::Undefined showPopover();
    jsbind::Undefined showPopover(const ShowPopoverOptions& options);
    jsbind::Undefined hidePopover();
    bool togglePopover();
    bool togglePopover(const jsbind::Any& options);
    jsbind::DOMString popover() const;
    void popover(const jsbind::DOMString& value);
    Element scrollParent() const;
    Element offsetParent() const;
    long offsetTop() const;
    long offsetLeft() const;
    long offsetWidth() const;
    long offsetHeight() const;
    EditContext editContext() const;
    void editContext(const EditContext& value);
    CSSStyleDeclaration style() const;
    jsbind::Any onbeforexrselect() const;
    void onbeforexrselect(const jsbind::Any& value);
    jsbind::DOMString virtualKeyboardPolicy() const;
    void virtualKeyboardPolicy(const jsbind::DOMString& value);
    DOMStringMap dataset() const;
    jsbind::DOMString nonce() const;
    void nonce(const jsbind::DOMString& value);
    bool autofocus() const;
    void autofocus(bool value);
    long tabIndex() const;
    void tabIndex(long value);
    jsbind::Undefined focus();
    jsbind::Undefined focus(const FocusOptions& options);
    jsbind::Undefined blur();
};

