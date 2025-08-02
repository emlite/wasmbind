#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLDialogElement class.
/// [`HTMLDialogElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement)
class HTMLDialogElement : public HTMLElement {
    explicit HTMLDialogElement(Handle h) noexcept;

public:
    explicit HTMLDialogElement(const emlite::Val &val) noexcept;
    static HTMLDialogElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLDialogElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLDialogElement(..)` constructor, creating a new HTMLDialogElement instance
    HTMLDialogElement();
    /// Getter of the `open` attribute.
    /// [`HTMLDialogElement.open`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/open)
    [[nodiscard]] bool open() const;
    /// Setter of the `open` attribute.
    /// [`HTMLDialogElement.open`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/open)
    void open(bool value);
    /// Getter of the `returnValue` attribute.
    /// [`HTMLDialogElement.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/returnValue)
    [[nodiscard]] jsbind::String returnValue() const;
    /// Setter of the `returnValue` attribute.
    /// [`HTMLDialogElement.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/returnValue)
    void returnValue(const jsbind::String& value);
    /// Getter of the `closedBy` attribute.
    /// [`HTMLDialogElement.closedBy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/closedBy)
    [[nodiscard]] jsbind::String closedBy() const;
    /// Setter of the `closedBy` attribute.
    /// [`HTMLDialogElement.closedBy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/closedBy)
    void closedBy(const jsbind::String& value);
    /// The show method.
    /// [`HTMLDialogElement.show`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/show)
    jsbind::Undefined show();
    /// The showModal method.
    /// [`HTMLDialogElement.showModal`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/showModal)
    jsbind::Undefined showModal();
    /// The close method.
    /// [`HTMLDialogElement.close`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/close)
    jsbind::Undefined close();
    /// The close method.
    /// [`HTMLDialogElement.close`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/close)
    jsbind::Undefined close(const jsbind::String& returnValue);
    /// The requestClose method.
    /// [`HTMLDialogElement.requestClose`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/requestClose)
    jsbind::Undefined requestClose();
    /// The requestClose method.
    /// [`HTMLDialogElement.requestClose`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement/requestClose)
    jsbind::Undefined requestClose(const jsbind::String& returnValue);
};

