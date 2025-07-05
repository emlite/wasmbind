#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class NDEFScanOptions;
class NDEFWriteOptions;
class NDEFMakeReadOnlyOptions;
class AbortSignal;


class NDEFScanOptions : public emlite::Val {
  explicit NDEFScanOptions(Handle h) noexcept;
public:
    static NDEFScanOptions take_ownership(Handle h) noexcept;
    explicit NDEFScanOptions(const emlite::Val &val) noexcept;
    NDEFScanOptions() noexcept;
    NDEFScanOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class NDEFWriteOptions : public emlite::Val {
  explicit NDEFWriteOptions(Handle h) noexcept;
public:
    static NDEFWriteOptions take_ownership(Handle h) noexcept;
    explicit NDEFWriteOptions(const emlite::Val &val) noexcept;
    NDEFWriteOptions() noexcept;
    NDEFWriteOptions clone() const noexcept;
    bool overwrite() const;
    void overwrite(bool value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class NDEFMakeReadOnlyOptions : public emlite::Val {
  explicit NDEFMakeReadOnlyOptions(Handle h) noexcept;
public:
    static NDEFMakeReadOnlyOptions take_ownership(Handle h) noexcept;
    explicit NDEFMakeReadOnlyOptions(const emlite::Val &val) noexcept;
    NDEFMakeReadOnlyOptions() noexcept;
    NDEFMakeReadOnlyOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class NDEFReader : public EventTarget {
    explicit NDEFReader(Handle h) noexcept;

public:
    explicit NDEFReader(const emlite::Val &val) noexcept;
    static NDEFReader take_ownership(Handle h) noexcept;

    NDEFReader clone() const noexcept;
    NDEFReader();
    jsbind::Any onreading() const;
    void onreading(const jsbind::Any& value);
    jsbind::Any onreadingerror() const;
    void onreadingerror(const jsbind::Any& value);
    jsbind::Promise scan();
    jsbind::Promise scan(const NDEFScanOptions& options);
    jsbind::Promise write(const jsbind::Any& message);
    jsbind::Promise write(const jsbind::Any& message, const NDEFWriteOptions& options);
    jsbind::Promise makeReadOnly();
    jsbind::Promise makeReadOnly(const NDEFMakeReadOnlyOptions& options);
};

