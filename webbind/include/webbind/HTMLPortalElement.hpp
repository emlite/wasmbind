#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"

class PortalActivateOptions;


class PortalActivateOptions : public emlite::Val {
  explicit PortalActivateOptions(Handle h) noexcept;
public:
    static PortalActivateOptions take_ownership(Handle h) noexcept;
    explicit PortalActivateOptions(const emlite::Val &val) noexcept;
    PortalActivateOptions() noexcept;
    PortalActivateOptions clone() const noexcept;
    jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

class HTMLPortalElement : public HTMLElement {
    explicit HTMLPortalElement(Handle h) noexcept;

public:
    explicit HTMLPortalElement(const emlite::Val &val) noexcept;
    static HTMLPortalElement take_ownership(Handle h) noexcept;

    HTMLPortalElement clone() const noexcept;
    HTMLPortalElement();
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    jsbind::Promise activate(const PortalActivateOptions& options);
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

