{
    "targets": [
        {
            "target_name": "NativeExtension",
            "sources": [],
            "conditions": [
                ['OS=="win"', {
                    "sources": [ "NativeExtension.cc", "functions.cc" ],
                    "include_dirs" : [
                        "<!(node -e \"require('nan')\")"
                    ]
                }]
            ]
        }
    ],
}
