# csvis - visualise and edit CSV files

Simple terminal program to quickly visualise CSV files in tabular form.  
Uses vi-style motions and modal editing (Normal/Visual/Insert modes).  
It is inspired by text editor [`Vis`](https://github.com/martanne/vis).  
For additional functionality you can pipe selected fields to/from/through external programs.

## Build
```sh
cd makefile_folder
make
```

## Keybindings

| Command  | Action                          |
|----------|---------------------------------|
| i, a     | Insert/append text              |
| Ctrl-C   | quit insert mode                |
| v        | enter visual mode               |
| i,a, O,o | Insert column/row               |
| I,A, O,o | Insert column/row               |
| V-l, V-j | Select entire column            |
| >, \|, < | Pipe operations                 |
| e        | Named pipe                      |
| :n.m     | Jump to column n, row m         |
    
## Examples for piping selection
```
< seq 10                      # Insert sequence
< cat data.csv                # Insert file
| bc                          # Pipe through calculator
| tr a-z A-Z                  # Uppercase conversion
| sed 's/\./;/g'              # Replace dots with semicolons
> wc                          # Pipe to wc to count lines
e > a=[1,2,3]                 # Pipe to python repl (pyrepl script)
```

## Bugs
- error when yank -> undo -> paste
- errors when inserting wide characters at the end of line
- inserting text when screen is full

---

## TODO
- [ ] Change delimiter
- [ ] leave file structure (without adding separators) if changing only fields that exist (!= NULL)
- [ ] vi movements page down, up, H, M, L, zz, zt, zb
- [ ] add :q, :w
- [ ] struct for display state (scr_x, v_y, y)
- [ ] search (grep?)
- [ ] how to calculate sum?
- [ ] mouse support
- [ ] multi select?
- [ ] show full width of cells
- [ ] enumerate
- [ ] "." to repeat
- [ ] how to write chosen area (yank 5-4,2-10)
- [ ] generalise send to named pipe

## Contribute
Please contact me for suggestions, advice, report issues,...
