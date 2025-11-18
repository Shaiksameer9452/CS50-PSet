SELECT title
from movies
where (id IN (
    select movie_id from stars
    where person_id in (
        select id
        from people where name = 'Bradley Cooper')))
        and
        (id IN (
            select movie_id from stars
            where person_id in (
                select id
                from people where name = 'Jennifer Lawrence'
            )));



