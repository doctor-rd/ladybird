/*
 * Copyright (c) 2022, Idan Horowitz <idan.horowitz@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/NativeFunction.h>

namespace JS::Intl {

class JS_API DurationFormatConstructor final : public NativeFunction {
    JS_OBJECT(DurationFormatConstructor, NativeFunction);
    GC_DECLARE_ALLOCATOR(DurationFormatConstructor);

public:
    virtual void initialize(Realm&) override;
    virtual ~DurationFormatConstructor() override = default;

    virtual ThrowCompletionOr<Value> call() override;
    virtual ThrowCompletionOr<GC::Ref<Object>> construct(FunctionObject& new_target) override;

private:
    explicit DurationFormatConstructor(Realm&);

    virtual bool has_constructor() const override { return true; }

    JS_DECLARE_NATIVE_FUNCTION(supported_locales_of);
};

}
