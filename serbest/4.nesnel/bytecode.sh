# chatgpt promptum 
#bana öyle bir bash yaz ki o bash 'in içinde bulunduğu klasördeki tüm java dosyalarını bytecode a çevirsin
#!/bin/bash

# Mevcut dizindeki tüm .java dosyalarını bulur ve derler
for file in *.java; do
    if [[ -f "$file" ]]; then
        echo "Compiling $file..."
        javac "$file"
        
        if [[ $? -eq 0 ]]; then
            echo "$file compiled successfully."
        else
            echo "Failed to compile $file."
        fi
    else
        echo "No .java files found."
    fi
done

#java CalisanKopekDemo

#calismadi ama zaten linux dersim var ve 29.10.2024 te tekrarını yapacağım orada yazarım