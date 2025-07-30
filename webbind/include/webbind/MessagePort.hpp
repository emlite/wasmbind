#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class StructuredSerializeOptions;


class StructuredSerializeOptions : public emlite::Val {
  explicit StructuredSerializeOptions(Handle h) noexcept;
public:
    static StructuredSerializeOptions take_ownership(Handle h) noexcept;
    explicit StructuredSerializeOptions(const emlite::Val &val) noexcept;
    StructuredSerializeOptions() noexcept;
    StructuredSerializeOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::Object> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::Object>& value);
};

class MessagePort : public EventTarget {
    explicit MessagePort(Handle h) noexcept;

public:
    explicit MessagePort(const emlite::Val &val) noexcept;
    static MessagePort take_ownership(Handle h) noexcept;

    MessagePort clone() const noexcept;
    jsbind::Undefined postMessage(const jsbind::Any& message);
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    jsbind::Undefined start();
    jsbind::Undefined close();
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

