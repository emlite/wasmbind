#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LockOptions;
class LockManagerSnapshot;
class AbortSignal;


class LockOptions : public emlite::Val {
  explicit LockOptions(Handle h) noexcept;
public:
    static LockOptions take_ownership(Handle h) noexcept;
    explicit LockOptions(const emlite::Val &val) noexcept;
    LockOptions() noexcept;
    LockOptions clone() const noexcept;
    LockMode mode() const;
    void mode(const LockMode& value);
    bool ifAvailable() const;
    void ifAvailable(bool value);
    bool steal() const;
    void steal(bool value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class LockManagerSnapshot : public emlite::Val {
  explicit LockManagerSnapshot(Handle h) noexcept;
public:
    static LockManagerSnapshot take_ownership(Handle h) noexcept;
    explicit LockManagerSnapshot(const emlite::Val &val) noexcept;
    LockManagerSnapshot() noexcept;
    LockManagerSnapshot clone() const noexcept;
    jsbind::Sequence<jsbind::Any> held() const;
    void held(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> pending() const;
    void pending(const jsbind::Sequence<jsbind::Any>& value);
};

class LockManager : public emlite::Val {
    explicit LockManager(Handle h) noexcept;

public:
    explicit LockManager(const emlite::Val &val) noexcept;
    static LockManager take_ownership(Handle h) noexcept;

    LockManager clone() const noexcept;
    jsbind::Promise<jsbind::Any> request(const jsbind::DOMString& name, const LockOptions& options, const jsbind::Function& callback);
    jsbind::Promise<LockManagerSnapshot> query();
};

