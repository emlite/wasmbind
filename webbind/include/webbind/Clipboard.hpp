#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ClipboardUnsanitizedFormats;


class ClipboardUnsanitizedFormats : public emlite::Val {
  explicit ClipboardUnsanitizedFormats(Handle h) noexcept;
public:
    static ClipboardUnsanitizedFormats take_ownership(Handle h) noexcept;
    explicit ClipboardUnsanitizedFormats(const emlite::Val &val) noexcept;
    ClipboardUnsanitizedFormats() noexcept;
    ClipboardUnsanitizedFormats clone() const noexcept;
    jsbind::Sequence<jsbind::DOMString> unsanitized() const;
    void unsanitized(const jsbind::Sequence<jsbind::DOMString>& value);
};

class Clipboard : public EventTarget {
    explicit Clipboard(Handle h) noexcept;

public:
    explicit Clipboard(const emlite::Val &val) noexcept;
    static Clipboard take_ownership(Handle h) noexcept;

    Clipboard clone() const noexcept;
    jsbind::Promise<jsbind::Any> read();
    jsbind::Promise<jsbind::Any> read(const ClipboardUnsanitizedFormats& formats);
    jsbind::Promise<jsbind::DOMString> readText();
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& data);
    jsbind::Promise<jsbind::Undefined> writeText(const jsbind::DOMString& data);
};

